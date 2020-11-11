/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/_EARSpeechRecognitionResultStream.h>

@class NSString;

@interface EARCSpeechRecognitionResultStreamGlue : NSObject <_EARSpeechRecognitionResultStream> {

	EARCSpeechRecognitionResultStream* _stream;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithStream:(EARCSpeechRecognitionResultStream*)arg1 ;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 ;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4 ;
-(void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2 ;
@end

