/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>
#import <libobjc.A.dylib/TIKeyboardInteractionProtocolEvent.h>

@class TIAutocorrectionList, NSString;

@interface TIKeyboardInteractionProtocolEventCandidatesOffered : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {

	TIAutocorrectionList* _candidates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sendTo:(id)arg1 ;
-(id)initWithCandidatesOffered:(id)arg1 keyboardState:(id)arg2 ;
@end

