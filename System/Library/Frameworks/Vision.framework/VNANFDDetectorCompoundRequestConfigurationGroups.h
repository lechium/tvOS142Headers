/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {

	NSMutableDictionary* _regionOfInterestConfigurations;

}
+(id)createCompoundConfigurationHashKeyForRequest:(id)arg1 compoundRequestRevision:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)count;
-(id)allConfigurations;
-(id)configurationForRequest:(id)arg1 ;
@end

