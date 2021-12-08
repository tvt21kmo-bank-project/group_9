const db = require('../database');

const login={
  checkPassword: function(username, callback) {
      return db.query('SELECT Salasana FROM kayttaja WHERE Kayttajatunnus = ?',[username], callback); 
    }
};
          
module.exports = login;