--require r/not_ndb_default.require
disable_query_log;
select convert(@@storage_engine using latin1) NOT IN ("ndbcluster","NDBCLUSTER") as "TRUE";
enable_query_log;
