ldapsearch -Q uid=$(whoami) | grep dn: | cut -c5-
