/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentContextMutating.h>

@class AFExperimentContext, NSDictionary, NSString;

@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating> {

	AFExperimentContext* _baseModel;
	NSDictionary* _experimentsByConfigurationIdentifier;
	struct {
		unsigned isDirty : 1;
		unsigned hasExperimentsByConfigurationIdentifier : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setExperimentsByConfigurationIdentifier:(id)arg1 ;
@end
