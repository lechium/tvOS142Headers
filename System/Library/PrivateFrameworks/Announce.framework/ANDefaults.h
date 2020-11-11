/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSUserDefaults;

@interface ANDefaults : NSObject {

	NSDictionary* _defaultsItems;
	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                   //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultsItems;              //@synthesize defaultsItems=_defaultsItems - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(id)objectForDefault:(id)arg1 ;
-(id)numberForDefault:(id)arg1 ;
-(BOOL)boolForDefault:(id)arg1 ;
-(void)setObject:(id)arg1 forDefault:(id)arg2 ;
-(void)setNumber:(id)arg1 forDefault:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forDefault:(id)arg2 ;
-(NSDictionary *)defaultsItems;
@end

