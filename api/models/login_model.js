const db = require('../database');

const login={
  checkPassword: function(Kayttajatunnus, callback) {
      return db.query('SELECT Salasana FROM kayttaja WHERE Kayttajatunnus = ?',[Kayttajatunnus], callback); 
    }
};
          
module.exports = login;