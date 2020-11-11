/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL, NSUUID;


@protocol _NSFileBackedFuture
@property (readonly) NSURL * fileURL; 
@property (readonly) unsigned long long fileSize; 
@property (readonly) NSUUID * UUID; 
@required
-(NSURL *)fileURL;
-(unsigned long long)fileSize;
-(NSUUID *)UUID;

@end

