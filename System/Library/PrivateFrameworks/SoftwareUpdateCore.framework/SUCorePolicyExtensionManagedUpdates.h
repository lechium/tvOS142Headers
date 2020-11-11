/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <SoftwareUpdateCore/SUCorePolicyExtension.h>
#import <libobjc.A.dylib/SUCorePolicyExtensionProtocol.h>

@class NSString;

@interface SUCorePolicyExtensionManagedUpdates : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {

	BOOL _supervised;
	BOOL _MDMUseDelayPeriod;
	NSString* _requestedPMV;
	long long _delayPeriodSecs;

}

@property (assign,nonatomic) BOOL supervised;                        //@synthesize supervised=_supervised - In the implementation block
@property (nonatomic,retain) NSString * requestedPMV;                //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (assign,nonatomic) BOOL MDMUseDelayPeriod;                 //@synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod - In the implementation block
@property (assign,nonatomic) long long delayPeriodSecs;              //@synthesize delayPeriodSecs=_delayPeriodSecs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)summary;
-(BOOL)supervised;
-(void)setSupervised:(BOOL)arg1 ;
-(id)extensionName;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(void)setMDMUseDelayPeriod:(BOOL)arg1 ;
-(NSString *)requestedPMV;
-(BOOL)MDMUseDelayPeriod;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1 ;
-(void)extendDocumentationMAAssetQuery:(id)arg1 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg1 ;
-(id)filterDocumentationAssetArray:(id)arg1 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1 ;
-(void)extendMSUApplyOptions:(id)arg1 ;
-(BOOL)isSupervisedPolicy;
-(void)_extendMAAssetQuery:(id)arg1 ;
-(id)_filterAssetArray:(id)arg1 ;
-(long long)delayPeriodSecs;
-(void)setDelayPeriodSecs:(long long)arg1 ;
@end

