/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNEntitlementVerification <NSObject>
@required
+(BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 isFirstOrSecondPartyWithError:(id*)arg2;

@end

