/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoSerialNumberDataSource.h>
#import <HMFoundation/HMFSystemInfoProductInfoDataSource.h>

@class NSString;

@interface __HMFIOKitDataSource : HMFObject <HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource>

@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long productPlatform; 
@property (nonatomic,readonly) long long productClass; 
@property (nonatomic,readonly) long long productVariant; 
@property (nonatomic,copy,readonly) NSString * modelIdentifier; 
-(long long)productClass;
-(NSString *)serialNumber;
-(NSString *)modelIdentifier;
-(long long)productPlatform;
-(long long)productVariant;
@end

