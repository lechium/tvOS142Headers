/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MRVirtualVoiceInputDeviceDescriptor, NSData;

@interface MRVirtualVoiceInputDevice : NSObject {

	unsigned _deviceID;
	unsigned _recordingState;
	MRVirtualVoiceInputDeviceDescriptor* _descriptor;

}

@property (nonatomic,readonly) unsigned deviceID;                                         //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) MRVirtualVoiceInputDeviceDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) unsigned recordingState;                                     //@synthesize recordingState=_recordingState - In the implementation block
@property (nonatomic,readonly) NSData * data; 
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(MRVirtualVoiceInputDeviceDescriptor *)descriptor;
-(unsigned)deviceID;
-(void)setDescriptor:(MRVirtualVoiceInputDeviceDescriptor *)arg1 ;
-(id)initWithDeviceID:(unsigned)arg1 ;
-(unsigned)recordingState;
-(void)setRecordingState:(unsigned)arg1 ;
@end

