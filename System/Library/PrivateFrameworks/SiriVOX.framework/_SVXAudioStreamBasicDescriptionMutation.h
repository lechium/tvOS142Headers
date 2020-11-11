/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXAudioStreamBasicDescriptionMutating.h>

@class SVXAudioStreamBasicDescription, NSString;

@interface _SVXAudioStreamBasicDescriptionMutation : NSObject <SVXAudioStreamBasicDescriptionMutating> {

	SVXAudioStreamBasicDescription* _baseModel;
	double _sampleRate;
	unsigned _formatID;
	unsigned _formatFlags;
	unsigned _bytesPerPacket;
	unsigned _framesPerPacket;
	unsigned _bytesPerFrame;
	unsigned _channelsPerFrame;
	unsigned _bitsPerChannel;
	unsigned _reserved;
	struct {
		unsigned isDirty : 1;
		unsigned hasSampleRate : 1;
		unsigned hasFormatID : 1;
		unsigned hasFormatFlags : 1;
		unsigned hasBytesPerPacket : 1;
		unsigned hasFramesPerPacket : 1;
		unsigned hasBytesPerFrame : 1;
		unsigned hasChannelsPerFrame : 1;
		unsigned hasBitsPerChannel : 1;
		unsigned hasReserved : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setSampleRate:(double)arg1 ;
-(void)setReserved:(unsigned)arg1 ;
-(id)generate;
-(void)setBitsPerChannel:(unsigned)arg1 ;
-(void)setBytesPerFrame:(unsigned)arg1 ;
-(void)setBytesPerPacket:(unsigned)arg1 ;
-(void)setChannelsPerFrame:(unsigned)arg1 ;
-(void)setFormatFlags:(unsigned)arg1 ;
-(void)setFormatID:(unsigned)arg1 ;
-(void)setFramesPerPacket:(unsigned)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end
