const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');

router.post('/', 
  function(request, response) {
    if(request.body.Kayttajatunnus && request.body.Salasana){
      const Kayttajatunnus = request.body.Kayttajatunnus;
      const Salasana = request.body.Salasana;
        login.checkPassword(Kayttajatunnus, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {

              bcrypt.compare(Salasana,dbResult[0].Salasana, function(err,compareResult) {

                if(compareResult) {
                  console.log("success");
                  //response.send(true);
                  response.send(dbResult);
                }
                else {
                    console.log("wrong password");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("Kayttajatunnus or Salasana missing");
      response.send(false);
    }
  }
);

module.exports=router;