/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNActivityAlert.h>

@class NSString, NSDictionary;

@interface CNMutableActivityAlert : CNActivityAlert

@property (nonatomic,copy) NSString * sound; 
@property (nonatomic,copy) NSString * vibration; 
@property (assign,nonatomic) BOOL ignoreMute; 
@property (nonatomic,copy) NSDictionary * userInfo; 
-(id)freeze;
@end
