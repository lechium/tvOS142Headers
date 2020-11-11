/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSString, NSData, NSSet;

@interface SFNetworkAttachment : NSManagedObject

@property (nonatomic,copy) NSNumber * attrs; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) BOOL isHotSpot; 
@property (assign,nonatomic) BOOL isKnownGood; 
@property (assign,nonatomic) BOOL isLowInternetDL; 
@property (assign,nonatomic) BOOL isLowInternetUL; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,retain) NSData * netSignature; 
@property (nonatomic,copy) NSNumber * overallStayMean; 
@property (nonatomic,copy) NSNumber * overallStayVar; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * velo; 
@property (assign,nonatomic) BOOL wasLastFailed; 
@property (nonatomic,retain) NSSet * hasDefaultRoute; 
@property (nonatomic,retain) NSSet * supportsFlows; 
+(id)entityName;
+(id)fetchRequest;
@end
