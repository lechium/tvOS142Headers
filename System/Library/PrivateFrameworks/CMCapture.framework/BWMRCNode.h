/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWQRCodeSceneObserver.h>

@class NSArray, NSDictionary, NSString;

@interface BWMRCNode : BWNode <BWQRCodeSceneObserver> {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSArray* _symbologiesArray;
	NSArray* _mrcIdentifiers;
	long long _lastMRCCount;
	CGRect _rectOfInterest;
	os_unfair_lock_s _rectOfInterestLock;
	BOOL _hasPendingRectOfInterestUpdate;
	BOOL _lowPowerModeEnabled;
	BOOL _usesSceneClassifierToGateQRCodeDetection;
	BOOL _sceneLikelyToHaveQRCodes;
	os_unfair_lock_s _sceneLock;
	BWSmartCameraScene _qrCodeScene;
	BWSmartCameraScene _documentScene;
	NSDictionary* _metadataIdentifierToSymbologyDictionary;
	OpaqueVTPixelTransferSessionRef _transferSession;
	CVBufferRef _internalBufferForBarcodeScanner;
	opaqueCMFormatDescriptionRef _internalBufferForBarcodeScannerFormatDescription;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(BOOL)lowPowerModeEnabled;
-(CGRect)rectOfInterest;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)_updateInputRequirements;
-(int)_setupSampleBufferProcessor;
-(id)_pixelFormatsSupportedByBarcodeScanner;
-(id)_newSymbologiesArrayFromIdentifiers:(id)arg1 ;
-(void)_teardownSampleBufferProcessor;
-(BOOL)_shouldEmitSBufForBarcodeCount:(long long)arg1 ;
-(void)sceneConfidenceDidChangeForQR:(float)arg1 document:(float)arg2 ;
-(id)initUsingSceneClassifierQRCodeDetectionVersion:(SCD_Struct_BW56)arg1 ;
-(void)setMrcIdentifiers:(id)arg1 ;
-(id)mrcIdentifiers;
@end

