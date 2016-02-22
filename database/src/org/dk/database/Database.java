/*
 * Copyright 2016 DarkSP <http://www.darksp.org>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.dk.database;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 * Classe responsavel pela conexão com o banco de dados
 * @author Brasilio Thomazo
 */
public class Database {
    private String dbtype, dbhost, dbname, dbuser, dbpass;
    private int dbport;
    
    public Database(String dbtype, String dbhost, int dbport, String dbname, String dbuser, String dbpass) {
        this.dbhost = dbhost;
        this.dbport = dbport;
        this.dbname = dbname;
        this.dbuser = dbuser;
        this.dbpass = dbpass;
    }
    
    public Connection getConnection() throws SQLException {
        return DriverManager.getConnection(getConnectionUrl(dbtype));
    }
    
    private String getConnectionUrl(String dbtype) {
        return String.format("jdbc:%s://%s:%d/%s?user=%s&password=%s", dbtype, dbhost, dbport, dbname, dbuser, dbpass);
    }
}

