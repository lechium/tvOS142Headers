/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmHandle : NSObject {

	shared_ptr<kaldi::quasar::LmHandle>* _handle;

}

@property (nonatomic,readonly) shared_ptr<kaldi::quasar::LmHandle>* handle;              //@synthesize handle=_handle - In the implementation block
-(shared_ptr<kaldi::quasar::LmHandle>*)handle;
-(id)_initWithHandle:(shared_ptr<kaldi::quasar::LmHandle>*)arg1 ;
@end

