#####################
# Country main data #
#####################

country =
{ tag                    = PAL
  capital                = 1797
  puppet = ENG
  control = ENG
  manpower               = 9.9
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
	relation = { tag = ENG value = 200 }
	relation = { tag = JOR value = 200 }
	relation = { tag = IND value = 200 }
  }

  nationalprovinces      = { 404 406 1797 1798 1799 }

  ownedprovinces         = { 404 406 1797 1798 1799 }

  controlledprovinces    = { 404 406 1797 1798 1799 }

  techapps               = { 5080 5090 6010 6030 1010 1190 2450 14000 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 3
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 557001 }
  headofgovernment       = { type = 9 id = 557002 }
  foreignminister        = { type = 9 id = 557003 }
  armamentminister       = { type = 9 id = 557004 }
  ministerofsecurity     = { type = 9 id = 557005 }
  ministerofintelligence = { type = 9 id = 557006 }
  chiefofstaff           = { type = 9 id = 557007 }
  chiefofarmy            = { type = 9 id = 557008 }
  chiefofnavy            = { type = 9 id = 557009 }
  chiefofair             = { type = 9 id = 557010 }
  nationalidentity = "policy_identity_parochial" 
	socialpolicy = "policy_social_enterprise" 
	nationalculture = "policy_culture_enterprise"

  landunit =
  { id       = { type = 11015 id = 1 }
    name     = "Army of the Palestine Mandate"
    location = 1797
    division =
    { id       = { type = 11015 id = 2 }
      name     = "Haganah"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 11015 id = 3 }
      name     = "Palestine Police Force"
      strength = 80
      type     = militia
      model    = 0
    }
  } 

	division_development = { 
		id = { type = 11015 id = 4 } 
		name = "al-Milishiya al-1i" 
		progress = 0.0000 
		location = 1797 
		cost = 2.7360 
		date = { 
			year = 1936 
			month = may 
			day = 23 
			hour = 0 
			} 
		manpower = 5.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 2191 
		days_for_first = 27 
		gearing_bonus = 0.0000 
		type = militia 
		extra = none 
		extra1 = none 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 0 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	province_development = { 
		id = { type = 11015 id = 5 } 
		name = "" 
		progress = 0.0000 
		location = 1797 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = february 
			day = 18 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2488 
		days_for_first = 98 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}

