/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {

	NSMutableDictionary* _storeLinksDirs;
	NSMutableDictionary* _filesToCleanUp;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)defaultInstance;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
@end

