/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, PKPeerPaymentPreferences, NSSet;

@interface PKPeerPaymentPreferencesUpdateRequest : NSObject {

	NSMutableSet* _sections;
	PKPeerPaymentPreferences* _updatedPreferences;

}

@property (nonatomic,readonly) PKPeerPaymentPreferences * updatedPreferences;              //@synthesize updatedPreferences=_updatedPreferences - In the implementation block
@property (nonatomic,copy,readonly) NSSet * sections;                                      //@synthesize sections=_sections - In the implementation block
-(id)description;
-(NSSet *)sections;
-(id)initWithUpdatedPreferences:(id)arg1 section:(long long)arg2 ;
-(void)coalesceWithRequest:(id)arg1 ;
-(PKPeerPaymentPreferences *)updatedPreferences;
@end

