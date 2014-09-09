#!/bin/bash

# Set parameters for admin notification
recipient="scott.reese@acquia.com smacgibbon@wgen.net bruce@appnovation.com jim@appnovation.com"
subject="[`date` - engageny west]: database sync from prod experienced errors"
logfile="/mnt/tmp/engageny.west/engageny-db-sync.log"
sendmail="/usr/bin/mail -s"

echo "[`date`] Starting database sync from prod..." > $logfile

# Run the database sync using drush
/usr/local/bin/drush -l www.engageny.org @engageny.prod ac-database-copy engageny west >> $logfile 2>&1

if [ "$?" -ne 0 ]
then
	echo "[`date`] Database sync from prod experienced errors." >> $logfile
	$sendmail "$subject" "$recipient" < $logfile
else
	echo "[`date`] Database sync from prod completed successfully." >> $logfile
fi
