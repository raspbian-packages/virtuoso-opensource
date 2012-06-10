<?xml version='1.0'?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/TR/WD-xsl">
  <xsl:template match="/">
  <document>
          <xsl:for-each select="root">
              <g><xsl:value-of select="a"/></g>
          </xsl:for-each>
  </document>
  </xsl:template>
</xsl:stylesheet>
