/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDictionary;

@interface MSDKF200EventEntityMO : NSManagedObject

@property (assign,nonatomic) BOOL committed; 
@property (nonatomic,copy) NSString * dedupKey; 
@property (nonatomic,copy) NSString * kind; 
@property (nonatomic,retain) NSDictionary * optionalKeys; 
@property (nonatomic,copy) NSString * senderUid; 
@property (nonatomic,copy) NSString * sourceUid; 
@property (assign,nonatomic) long long timestamp; 
+(id)fetchRequest;
@end

