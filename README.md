# learning_ai_advice_app
This is a learning ai for an advice app.
How to use this ai:

Constuction:
	
	contents of the advice links:
		An array of key situational terms that relate to the peice of advice.
		An array of next pointers allinged with the situaltional term they have in common.
		An array of prevous pointers allinged with the situaltional term they have in common.
		An array of first pointers allinged with the situaltional term they have in common.
		An array of ints containing rank for corasponding term.
		An array of ints containing pending rank for corasponding term.(ten point deffreance and change will be accepted)
		gentalness rank (1 begin gental as possable 10 begin hard or mean as possable).
		day:
		month:
		A char array containg the advice string. 
		each link has a max of 10 keyterms as defined in the header.
	
	how the links opparet with each other:
		prevous is of higher rank.
		next is a lower rank.
		when sorting pointers due to rank changes each links pointers must be updated
	
	selecting and storing the 6 peices of advice shown to the user:
		the program tracks a list of ten key terms (same quanty as defined for the links) (the first key term has the highst level of priotity)
		if the first term is not peresnt in the list use the next key term and store the terms in a to be iddentifeyed file along with the advice picked for use when the term apeared.
		the program will select the highest ranked peice of advice unless the next lowest has more terms in common. A one will be saved for if the term was picked for haveing more key terms in common other wise it will be zero. 
		if its a one then the advice one bellow will be checked compared to the one above which ever has more key terms will be selected. if the amount is the same the one of higher rank will be picked.
		the gental ness rank must be equal to the current seaching gentalness rank.
		if a paice of advice cant be found with the current gentalness rank then the rank will go up one until it reaches 10. when it is at ten the ranking will go back to it's original rank and decrease by one.
		the selected advice will be stored in a sturct of 6 pointers the first five will be ordered as picked the sixth one will be the first unranked advice identifed by the same seaching algorithem. (the oldest one will be selected insetted of useing rank selection.)

		
	other parts:
		an array of sturcts contaning the key terms and the currently heighest ranked term.
		tracks the int of the last situaltional term used for that numbered situation of the users.
		array index will be sorted by simaller words when no more simaler words are found it statrts on the next set of words.
		olny accept fist rank change from the user.
		persent the stiuation as the AI sees desplaying the terms by selected prioty.

	mini game:
		groupe the similer words (AI trakes thease terms and sorts the key terms index by the results).
		you play then you get a cookie. :)
	
	chat room:
		is being monitered by the AI to learn new pecies of advice. the new advice gets add to the unranked advice at ten end of the list. the ten terms it can identfy from the user requaesint advice and remaing terms selected from the advice its self to fill all ten key terms. if no more are identfyed mark then null. and fill them in from situations were the advice was selected to be used.
	
	user:
		stores username stiuations with a number placed at the beging (this way the users can have pending stiuations were they seek advice) number of times advice is sought for that situation. index number of the last key term used.
	
	clean up advice;
		if advice is unsued for 20 days move to the old advice file change pending rank to 0 then add to end of unranked list. when used and pending rank is 10 or -10 add to the old rank and move to the list containg the ranked advice.
		-DO NOT MOVE OR REMOVE IF IT IS THE FIRST RANKEND FOR A SITUATIONAL TERM!

	selsecting key terms:
		current time;
		a list of words for before the term (example: want they are, what, can, should, how, I am, stop, n"t, this)
		a list of passover terms (example: girl, guy, men, women, I, he, she, we, to, do, them)
	

