/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PlistProcessor : NSObject
+(id)sharedPlistProcessor;
-(id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2 ;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/id)arg2 ;
-(BOOL)verifyPlist:(id)arg1 forMountPoint:(id)arg2 ;
@end

