/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem {

	NSMutableSet* _propStats;

}

@property (nonatomic,retain) NSMutableSet * propStats;              //@synthesize propStats=_propStats - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(NSMutableSet *)propStats;
-(void)addPropStat:(id)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
-(BOOL)hasPropertyError;
@end

