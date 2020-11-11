/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject {

	NSMutableDictionary* _capabilitiesInformation;

}

@property (retain) NSMutableDictionary * capabilitiesInformation;              //@synthesize capabilitiesInformation=_capabilitiesInformation - In the implementation block
-(id)init;
-(id)dictionaryRepresentation;
-(id)initWithOptions:(id)arg1 ;
-(void)gatherCapabilitiesWithOptions:(id)arg1 ;
-(void)addVersion;
-(void)addCodecInformation;
-(void)addHEVCCodecInformationToDictionary:(id)arg1 ;
-(void)addHEIFContainerInformationToDictionary:(id)arg1 ;
-(void)addVendorSpecificInformation;
-(void)addTranscodeChoiceWithOptions:(id)arg1 ;
-(void)addLivePhotoInformationToDictionary:(id)arg1 ;
-(void)addAssetBundleInformationToDictionary:(id)arg1 ;
-(NSMutableDictionary *)capabilitiesInformation;
-(void)setCapabilitiesInformation:(NSMutableDictionary *)arg1 ;
@end
