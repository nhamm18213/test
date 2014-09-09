#!/bin/bash

# Set parameters for admin notification
recipient="scott.reese@acquia.com smacgibbon@wgen.net bruce@appnovation.com jim@appnovation.com"
subject="[`date` - engageny west]: file copy from prod experienced errors"
logfile="/mnt/tmp/engageny.west/engageny-file-copy.log"
sendmail="/usr/bin/mail -s"

echo "[`date`] Starting file copy from prod..." > $logfile

# Run the file sync with drush
/usr/local/bin/drush -l www.engageny.org --yes rsync @engageny.prod:%files/ @engageny.west:%files --mode=zkrlptD >> $logfile 2>&1

if [ "$?" -ne 0 ]
then
	echo "[`date`] File copy from prod experienced errors." >> $logfile
	$sendmail "$subject" "$recipient" < $logfile
else
	echo "[`date`] File copy from prod completed successfully." >> $logfile
fi
