#####################
# Country main data #
#####################

country =
{ tag                    = JOR
  capital                = 1796
  puppet = ENG
  control = ENG
  manpower               = 14
  # Resource Reserves
  energy                 = 100
  metal                  = 100
  rare_materials         = 50
  oil                    = 50
  supplies               = 50
  money                  = 0
  transports             = 10
  escorts                = 0
  diplomacy =
  { 
	relation = { tag = ENG value = 100 }
  }

  nationalprovinces      = { 1796 407 1802 1803 }

  ownedprovinces         = { 1796 407 1802 1803 }

  controlledprovinces    = { 1796 407 1802 1803 }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 5080 5090 6010 6030 1010 1190 2450 14000 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 5
    freedom           = 3
    free_market       = 3
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 556001 }
  headofgovernment       = { type = 9 id = 556002 }
  foreignminister        = { type = 9 id = 556003 }
  armamentminister       = { type = 9 id = 556004 }
  ministerofsecurity     = { type = 9 id = 556005 }
  ministerofintelligence = { type = 9 id = 556006 }
  chiefofstaff           = { type = 9 id = 556007 }
  chiefofarmy            = { type = 9 id = 556008 }
  chiefofnavy            = { type = 9 id = 556009 }
  chiefofair             = { type = 9 id = 556010 }
  nationalidentity = "policy_identity_frustrated" 
	socialpolicy = "policy_social_religious" 
	nationalculture = "policy_culture_enterprise"

  landunit =
  { id       = { type = 10097 id = 1 }
    name     = "Jordanian Armed Forces"
    location = 1796
    division =
    { id       = { type = 10097 id = 2 }
      name     = "Transjordan Frontier Force"
      strength = 10
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 10097 id = 3 }
      name     = "Arab Legion"
      strength = 24
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 10097 id = 4 }
      name     = "The Desert Force"
      strength = 6
      type     = cavalry
      model    = 0
    }
  } 

}