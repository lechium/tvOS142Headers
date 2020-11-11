/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXDeviceSetupFlowSiriCapabilitiesHintMutating.h>

@class SVXDeviceSetupFlowSiriCapabilitiesHint, NSString;

@interface _SVXDeviceSetupFlowSiriCapabilitiesHintMutation : NSObject <SVXDeviceSetupFlowSiriCapabilitiesHintMutating> {

	SVXDeviceSetupFlowSiriCapabilitiesHint* _baseModel;
	long long _style;
	struct {
		unsigned isDirty : 1;
		unsigned hasStyle : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setStyle:(long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

