/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FigVideoCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigCaptureSourceConfiguration;

@interface FigCaptureSessionParsedVideoDataSinkConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigCaptureSourceConfiguration* _cameraConfiguration;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceConfiguration * cameraConfiguration;                                                  //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                                                                 //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
-(void)dealloc;
-(int)sourceDeviceType;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(id)initWithVideoDataConnectionConfiguration:(id)arg1 metadataObjectConnectionConfiguration:(id)arg2 sourceDeviceType:(int)arg3 ;
@end
