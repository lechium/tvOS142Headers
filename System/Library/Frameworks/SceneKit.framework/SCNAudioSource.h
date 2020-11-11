/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioFile, AVAudioPCMBuffer, NSURL, NSString;

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding> {

	AVAudioFile* _audioFile;
	AVAudioPCMBuffer* _audioBuffer;
	NSURL* _audioURL;
	NSString* _audioName;
	BOOL _loops;
	BOOL _shouldStream;
	BOOL _loaded;
	BOOL positional;
	float volume;
	float rate;
	float reverbBlend;

}

@property (assign,getter=isPositional,nonatomic) BOOL positional; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float reverbBlend; 
@property (assign,nonatomic) BOOL loops;                                       //@synthesize loops=_loops - In the implementation block
@property (assign,nonatomic) BOOL shouldStream;                                //@synthesize shouldStream=_shouldStream - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)audioSourceNamed:(id)arg1 ;
+(id)audioSourceWithAVAudioPCMBuffer:(id)arg1 ;
-(void)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(double)duration;
-(void)_load;
-(id)fileName;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(long long)renderingAlgorithm;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)audioBuffer;
-(void)loadIfNeeded;
-(BOOL)shouldStream;
-(BOOL)loops;
-(id)audioFile;
-(id)audioBufferFormat;
-(id)initWithAVAudioPCMBuffer:(id)arg1 ;
-(void)setPositional:(BOOL)arg1 ;
-(BOOL)isPositional;
-(void)_loadURLWithBundle:(id)arg1 ;
-(id)initWithFileNamed:(id)arg1 inBundle:(id)arg2 ;
-(id)initWithFileNamed:(id)arg1 ;
-(void)setLoops:(BOOL)arg1 ;
-(void)setShouldStream:(BOOL)arg1 ;
-(void)_customEncodingOfSCNAudioSource:(id)arg1 ;
-(void)_customDecodingOfSCNAudioSource:(id)arg1 ;
@end

