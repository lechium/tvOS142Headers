/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TVPPlaybackState : NSObject {

	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)loading;
+(id)paused;
+(id)playing;
+(id)stopped;
+(id)scanning;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

