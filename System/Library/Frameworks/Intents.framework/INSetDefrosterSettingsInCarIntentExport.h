/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, INSpeakableString;


@protocol INSetDefrosterSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enable; 
@property (assign,nonatomic) long long defroster; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(id)init;
-(void)setEnable:(id)arg1;
-(NSNumber *)enable;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(long long)defroster;
-(void)setDefroster:(long long)arg1;

@end
