/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSpeakableString;


@protocol INActivateCarSignalIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * carName; 
@property (assign,nonatomic) unsigned long long signals; 
@required
-(id)init;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(unsigned long long)signals;
-(void)setSignals:(unsigned long long)arg1;

@end

