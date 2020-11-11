/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSData, NSMutableSet;

@interface HMDCameraRecordingSessionFaceClassificationContext : HMFObject {

	NSData* _faceCropData;
	NSMutableSet* _faceClassifications;

}

@property (readonly) NSData * faceCropData;                           //@synthesize faceCropData=_faceCropData - In the implementation block
@property (readonly) NSMutableSet * faceClassifications;              //@synthesize faceClassifications=_faceClassifications - In the implementation block
-(NSData *)faceCropData;
-(id)attributeDescriptions;
-(NSMutableSet *)faceClassifications;
-(id)initWithFaceCropData:(id)arg1 ;
@end

