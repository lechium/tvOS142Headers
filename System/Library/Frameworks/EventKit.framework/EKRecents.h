/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EKRecents : NSObject
+(Class)crRecentContactsLibraryClass;
+(id)recentForContactWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3 ;
+(id)crRecentsDomainCalendarString;
+(id)crAddressKindEmailString;
+(void)recordRecentWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3 ;
+(id)crAddressKindPhoneNumberString;
+(BOOL)recordRecentForContactWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 ;
@end
