/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate, NSData;


@protocol FMKeychainItem <NSObject>
@property (nonatomic,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * lastModifyDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSData * rawData; 
@required
-(NSString *)password;
-(NSDate *)creationDate;
-(NSData *)rawData;
-(NSDate *)lastModifyDate;

@end

