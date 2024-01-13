#####################
# Country main data #
#####################

country =
{ tag                    = SYR
  capital                = 1792
  puppet = FRA
  control = FRA
  manpower               = 14.9
  # Resource Reserves

  free                   = { }
  energy                 = 400
  metal                  = 400
  rare_materials         = 20
  oil                    = 400
  supplies               = 400
  money                  = 20
  transports             = 10
  escorts                = 0
  diplomacy =
  { 
	relation = { tag = FRA value = 200 }
	relation = { tag = LEB value = 200 }
  }

  nationalprovinces      = { 1792 1795 1861 1862 1863 }

  ownedprovinces         = { 1792 1795 1861 1862 1863 }

  controlledprovinces    = { 1792 1795 1861 1862 1863 }

  techapps               = { 5080 5090 6010 6030 1010 1190 2450 14000 }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 7
     political_left    = 3
     free_market       = 8
     freedom           = 10
     professional_army = 2
     defense_lobby     = 7
     interventionism   = 2
  }
  headofstate            = { type = 9 id = 528001 }
  headofgovernment       = { type = 9 id = 528002 }
  foreignminister        = { type = 9 id = 528003 }
  armamentminister       = { type = 9 id = 528004 }
  ministerofsecurity     = { type = 9 id = 528005 }
  ministerofintelligence = { type = 9 id = 528006 }
  chiefofstaff           = { type = 9 id = 528007 }
  chiefofarmy            = { type = 9 id = 528008 }
  chiefofnavy            = { type = 9 id = 528009 }
  chiefofair             = { type = 9 id = 528010 }
  nationalidentity = "policy_identity_parochial" 
	socialpolicy = "policy_social_enterprise" 
	nationalculture = "policy_culture_enterprise"

  landunit =
  { location = 1792
    id       = { type = 10064 id = 1 }
    name     = "Armée du Levant"
    division =
    { id       = { type = 10064 id = 2 }
      name     = "Troupes Spéciales du Levant"
      strength = 100
      type     = infantry
      model    = 0
    }
  } 

	province_development = { 
		id = { type = 10064 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 1792 
		cost = 2.0000 
		date = { 
			year = 1953 
			month = august 
			day = 25 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32
		done = 0 
		days = 2031 
		days_for_first = 205 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}

