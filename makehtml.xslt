<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:output method="html" indent="yes"
              doctype-public="-//W3C//DTD HTML 4.01//EN"
	            doctype-system="http://www.w3.org/TR/html4/strict.dtd"/>

	<xsl:template name="resultcell" match="result/*">
		<xsl:element name="div">
			<xsl:if test="contains(text(), 'ok')">
				<xsl:attribute name="style">background-color: green; color: white;</xsl:attribute>
			</xsl:if>
			<xsl:if test="contains(text(), 'failed')">
				<xsl:attribute name="style">background-color: red; color: white;</xsl:attribute>
			</xsl:if>
			<xsl:value-of select="text()"/>
		</xsl:element>
	</xsl:template>

	<xsl:template match="/">
		<html>
			<head>
				<title>Results</title>
			</head>
			<body>
				<table>
					<tr>
						<th>Name</th>
						<th>Compile</th>
						<th>Link</th>
						<th>GCC Compile</th>
						<th>GCC Run</th>
						<th>Firm Run</th>
						<th>Results</th>
					</tr>
					<xsl:for-each select="/results/section">
						<tr>
						    <th colspan="7" style="background-color: yellow; color: black;"><xsl:value-of select="@name"/></th>
						</tr>
						<xsl:for-each select="result">
							<tr>
								<td>
									<xsl:element name="a">
										<xsl:attribute name="href">buildresult_<xsl:value-of select="@name"/>.txt</xsl:attribute>
										<xsl:value-of select="@name"/>
									</xsl:element>
								</td>
								<td><xsl:apply-templates select="compile"/></td>
								<td><xsl:apply-templates select="link"/></td>
								<td><xsl:apply-templates select="gcc_compile"/></td>
								<td><xsl:apply-templates select="gcc_run"/></td>
								<td><xsl:apply-templates select="firm_run"/></td>
								<td><xsl:apply-templates select="diff"/></td>
							</tr>
						</xsl:for-each>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
