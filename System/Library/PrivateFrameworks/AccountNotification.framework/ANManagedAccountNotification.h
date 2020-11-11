/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, ANManagedNotificationAction;

@interface ANManagedAccountNotification : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSString * activateButtonTitle; 
@property (nonatomic,retain) NSString * dismissButtonTitle; 
@property (nonatomic,retain) NSString * callbackMachServiceName; 
@property (nonatomic,retain) id userInfo; 
@property (nonatomic,retain) NSString * accountTypeID; 
@property (nonatomic,retain) NSString * eventID; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) ANManagedNotificationAction * activateAction; 
@property (nonatomic,retain) ANManagedNotificationAction * dismissAction; 
@property (nonatomic,retain) ANManagedNotificationAction * clearAction; 
-(void)takeValuesFromAccountNotification:(id)arg1 ;
@end

