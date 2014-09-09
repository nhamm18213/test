<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:variable name="url" select="'red'" />

  <xsl:template match="/">
    <html>
      <head>
        <title><xsl:value-of select="/rss/channel/title" /></title>
        <link rel="stylesheet" type="text/css" href="/sites/all/themes/engageny/css/rss_es.css" />

        <script type="text/javascript" src="http://rss.feedsportal.com/xsl/js/disableOutputEscaping.js" />


      </head>

      <body onload="go_decoding()" style="font-family:helvetica,arial;">
        <div id="cometestme" style="display:none;">
          <xsl:text disable-output-escaping="yes">&amp;amp;</xsl:text>
        </div>

        <div id="outer">

<div id="information">

	<div id="header">
		<div class="logo">
		</div><!-- end logo -->

		<!--<div class="accred">
			<strong style="font-size:10pt;">Distributed by </strong><a href="http://www.mediafed.com">
	  		<img src="http://res3.feedsportal.com/test/xsl_logo.jpg" align="bottom" alt="Mediafed logo" border="0" /></a>
		</div>--><!-- end accred -->
	</div><!-- end header -->

	<div class="intro">

		<h2 style="font-size:18pt;font-weight:bold;color:#3c3c46;">How do I subscribe?</h2>
		<p>Click on the My Yahoo button below to automatically follow this feed.</p>
		<!-- 		<p>Click on the Qrius/My Yahoo buttons below to automatically follow this feed online, on your tablet or mobile.</p> -->
	</div><!-- end intro -->


	<table class="newsreaders">
	 <tr>
	  	  <td>

	   <script type="text/javascript">
	   var title = "<xsl:value-of select='/rss/channel/title' />";
<xsl:comment><![CDATA[

if(title.length > 35) title = title.substring(0,35)+ '...';
	   document.write('<div style="display:inline-block;line- height:18px;width:91px;height:17px;cursor:pointer;padding-right:12px;padding-bottom:5px;margin-top:8px;float:left;"><a href="http://add.my.yahoo.com/rss?url='+document.URL+'"><img src="http://us.i1.yimg.com/us.yimg.com/i/us/my/addtomyyahoo4.gif" style="width:91px;height:17px;" /></a></div>');




]]> </xsl:comment>

	   </script>

	   <!-- document.write('<div class="qrius-button" qriusfeed="'+document.URL+'" qriustitle="'+title+'" style="display:inline-block; width:36px;height:22px;line- height:18px;cursor:pointer;float: left;padding-right: 17px;margin-top:6px;"><img src="http://js.qrius.me/serve/res/qrius-button.png" style="width:36px;height:22px;" /><script type="text/javascript" src="http://js.qrius.me/qrius.en.js"></script></div><div style="display:inline-block;line- height:18px;width:91px;height:17px;cursor:pointer;padding-right:12px;padding-bottom:5px;margin-top:8px;float:left;"><a href="http://add.my.yahoo.com/rss?url='+document.URL+'"><img src="http://us.i1.yimg.com/us.yimg.com/i/us/my/addtomyyahoo4.gif" style="width:91px;height:17px;" /></a></div>'); -->

	  </td>

	 </tr>
	</table><!-- end newsreaders -->


</div><!-- end information -->

	<div class="heading">
		<h1 class="feednametitle" style="font-size:26pt;font-color:#ff0093;" id="feednametitle"><xsl:value-of select="/rss/channel/title" /></h1>
		<h4 class="feednameinfo"><xsl:value-of select="/rss/channel/description" /><xsl:text></xsl:text></h4>
		<p class="builddate" style="font-size:10pt;margin-top: 15px;"><xsl:value-of select="/rss/channel/lastBuildDate" /></p>
	</div><!-- end heading-->

    <div id="items">

            <xsl:for-each select="/rss/channel/item">
              <div class="item">
               <h3 class="header" ><a style="font-size:18pt !important;color:#3c3c46;font-weight:bold;text-decoration: none;" href="{link}"><xsl:value-of select="title" /></a></h3>
               <p class="pubdate"><xsl:value-of select="pubDate" /></p><br />
               <span style="font-size:13pt"><xsl:value-of select="description" disable-output-escaping="yes" /></span>
			  </div><!-- end item (class) -->
            </xsl:for-each>
            <p name="decodeable" class="itembody"></p>
    </div><!-- end items (ID) -->

</div>

    </body>
    </html>
  </xsl:template>

<xsl:output method="html"
            encoding="UTF-8"
            indent="no"/>



</xsl:stylesheet>
