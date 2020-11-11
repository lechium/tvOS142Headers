/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INDateComponentsRange, INPerson, NSNumber;


@protocol INSearchCallHistoryIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) INPerson * recipient; 
@property (assign,nonatomic) unsigned long long callCapabilities; 
@property (assign,nonatomic) unsigned long long callTypes; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSNumber * unseen; 
@required
-(id)init;
-(void)setRecipient:(id)arg1;
-(INDateComponentsRange *)dateCreated;
-(void)setDateCreated:(id)arg1;
-(INPerson *)recipient;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1;
-(unsigned long long)callCapabilities;
-(unsigned long long)callTypes;
-(NSNumber *)unseen;
-(void)setUnseen:(id)arg1;
-(void)setCallCapabilities:(unsigned long long)arg1;
-(void)setCallTypes:(unsigned long long)arg1;

@end

