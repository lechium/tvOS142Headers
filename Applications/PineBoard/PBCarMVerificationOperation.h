//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "PBTextEntryViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface PBCarMVerificationOperation : ISOperation <PBTextEntryViewControllerDelegate>
{
    unsigned long long _submitIndex;	// 96 = 0x60
    unsigned long long _sendCodeIndex;	// 104 = 0x68
    CDUnknownBlockType _codeHandler;	// 112 = 0x70
    CDUnknownBlockType _sendNewCodeBlock;	// 120 = 0x78
    NSString *_customerTitle;	// 128 = 0x80
    NSString *_customerMessage;	// 136 = 0x88
    NSDictionary *_failureClientInfo;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000100141a94
@property(retain, nonatomic) NSDictionary *failureClientInfo; // @synthesize failureClientInfo=_failureClientInfo;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
@property(copy, nonatomic) CDUnknownBlockType sendNewCodeBlock; // @synthesize sendNewCodeBlock=_sendNewCodeBlock;
@property(copy, nonatomic) CDUnknownBlockType codeHandler; // @synthesize codeHandler=_codeHandler;
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x0000000100141750
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100141560
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100141188
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100140acc
- (id)_copyVerifyResponseWithCode:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001405cc
- (id)_copySendCodeResponseWithError:(id *)arg1;	// IMP=0x00000001001401d8
- (_Bool)_verifySMSCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000010013fa34
- (_Bool)_sendNewCodeShowingDialogs:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010013f33c
- (id)_copySMSCodeFromUser;	// IMP=0x000000010013ee54
- (void)run;	// IMP=0x000000010013eb94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

