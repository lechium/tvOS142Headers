/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PBSMediaRemoteServiceInterface, OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableDictionary, NSDictionary, NSArray, NSObject, NSString, NSData, CUAppleIDClient, CUPairedPeer;

@interface CUPairingSession : NSObject {

	PairingSessionPrivateRef _pairingSession;
	NSMutableDictionary* _pairingStreams;
	LogCategory* _ucat;
	id<PBSMediaRemoteServiceInterface> _pbsMediaService;
	id _pinDialogToken;
	unsigned _flags;
	unsigned _pinType;
	unsigned _pinTypeActual;
	unsigned _sessionType;
	NSDictionary* _acl;
	NSDictionary* _aclActual;
	NSDictionary* _additionalPeerInfo;
	NSDictionary* _additionalSelfInfo;
	NSArray* _allowedMACAddresses;
	unsigned long long _selfAppFlags;
	NSDictionary* _appInfoSelf;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _fixedPIN;
	NSString* _label;
	NSDictionary* _peerInfo;
	NSData* _mfiCertificateData;
	NSString* _mfiProductType;
	NSString* _mfiSerialNumber;
	NSData* _mfiToken;
	NSString* _myAppleID;
	CUAppleIDClient* _myAppleIDInfoClient;
	NSString* _peerAppleID;
	/*^block*/id _completionHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _showPINHandlerEx;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;
	/*^block*/id _sendDataHandler;
	/*^block*/id _signDataHandler;
	/*^block*/id _verifySignatureHandler;

}

@property (nonatomic,copy) NSDictionary * acl;                                        //@synthesize acl=_acl - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * aclActual;                         //@synthesize aclActual=_aclActual - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalPeerInfo;                         //@synthesize additionalPeerInfo=_additionalPeerInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalSelfInfo;                         //@synthesize additionalSelfInfo=_additionalSelfInfo - In the implementation block
@property (nonatomic,copy) NSArray * allowedMACAddresses;                             //@synthesize allowedMACAddresses=_allowedMACAddresses - In the implementation block
@property (nonatomic,readonly) unsigned long long peerAppFlags; 
@property (assign,nonatomic) unsigned long long selfAppFlags;                         //@synthesize selfAppFlags=_selfAppFlags - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * appInfoPeer; 
@property (nonatomic,copy) NSDictionary * appInfoSelf;                                //@synthesize appInfoSelf=_appInfoSelf - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * fixedPIN;                                       //@synthesize fixedPIN=_fixedPIN - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) CUPairedPeer * pairedPeer; 
@property (nonatomic,copy,readonly) NSDictionary * peerInfo;                          //@synthesize peerInfo=_peerInfo - In the implementation block
@property (assign,nonatomic) unsigned pinType;                                        //@synthesize pinType=_pinType - In the implementation block
@property (nonatomic,readonly) unsigned pinTypeActual;                                //@synthesize pinTypeActual=_pinTypeActual - In the implementation block
@property (assign,nonatomic) unsigned sessionType;                                    //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,copy) NSData * mfiCertificateData;                               //@synthesize mfiCertificateData=_mfiCertificateData - In the implementation block
@property (nonatomic,copy) NSString * mfiProductType;                                 //@synthesize mfiProductType=_mfiProductType - In the implementation block
@property (nonatomic,copy) NSString * mfiSerialNumber;                                //@synthesize mfiSerialNumber=_mfiSerialNumber - In the implementation block
@property (nonatomic,copy) NSData * mfiToken;                                         //@synthesize mfiToken=_mfiToken - In the implementation block
@property (nonatomic,copy) NSString * myAppleID;                                      //@synthesize myAppleID=_myAppleID - In the implementation block
@property (nonatomic,retain) CUAppleIDClient * myAppleIDInfoClient;                   //@synthesize myAppleIDInfoClient=_myAppleIDInfoClient - In the implementation block
@property (nonatomic,copy) NSString * peerAppleID;                                    //@synthesize peerAppleID=_peerAppleID - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id showPINHandlerEx;                                       //@synthesize showPINHandlerEx=_showPINHandlerEx - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                         //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                         //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
@property (nonatomic,copy) id sendDataHandler;                                        //@synthesize sendDataHandler=_sendDataHandler - In the implementation block
@property (nonatomic,copy) id signDataHandler;                                        //@synthesize signDataHandler=_signDataHandler - In the implementation block
@property (nonatomic,copy) id verifySignatureHandler;                                 //@synthesize verifySignatureHandler=_verifySignatureHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_activate;
-(unsigned)flags;
-(void)invalidate;
-(void)activate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setFlags:(unsigned)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setAcl:(NSDictionary *)arg1 ;
-(NSDictionary *)acl;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_cleanup;
-(void)setPinType:(unsigned)arg1 ;
-(unsigned)pinType;
-(void)setPeerAppleID:(NSString *)arg1 ;
-(NSString *)myAppleID;
-(void)setMyAppleID:(NSString *)arg1 ;
-(NSString *)peerAppleID;
-(CUPairedPeer *)pairedPeer;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(unsigned long long)peerAppFlags;
-(void)setSelfAppFlags:(unsigned long long)arg1 ;
-(NSDictionary *)appInfoPeer;
-(void)_completed:(id)arg1 ;
-(void)receivedData:(id)arg1 ;
-(void)_receivedData:(id)arg1 flags:(unsigned)arg2 ;
-(void)tryPIN:(id)arg1 ;
-(void)_tryPIN:(id)arg1 ;
-(int)_showPINBuiltInUI:(id)arg1 ;
-(id)openStreamWithName:(id)arg1 error:(id*)arg2 ;
-(id)openStreamWithName:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(void)closeStream:(id)arg1 ;
-(int)deriveKeyWithSaltPtr:(const void*)arg1 saltLen:(unsigned long long)arg2 infoPtr:(const void*)arg3 infoLen:(unsigned long long)arg4 keyLen:(unsigned long long)arg5 outputKeyPtr:(void*)arg6 ;
-(NSDictionary *)aclActual;
-(NSDictionary *)additionalPeerInfo;
-(void)setAdditionalPeerInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalSelfInfo;
-(void)setAdditionalSelfInfo:(NSDictionary *)arg1 ;
-(NSArray *)allowedMACAddresses;
-(void)setAllowedMACAddresses:(NSArray *)arg1 ;
-(unsigned long long)selfAppFlags;
-(NSDictionary *)appInfoSelf;
-(void)setAppInfoSelf:(NSDictionary *)arg1 ;
-(NSString *)fixedPIN;
-(void)setFixedPIN:(NSString *)arg1 ;
-(NSDictionary *)peerInfo;
-(unsigned)pinTypeActual;
-(unsigned)sessionType;
-(void)setSessionType:(unsigned)arg1 ;
-(NSData *)mfiCertificateData;
-(void)setMfiCertificateData:(NSData *)arg1 ;
-(NSString *)mfiProductType;
-(void)setMfiProductType:(NSString *)arg1 ;
-(NSString *)mfiSerialNumber;
-(void)setMfiSerialNumber:(NSString *)arg1 ;
-(NSData *)mfiToken;
-(void)setMfiToken:(NSData *)arg1 ;
-(CUAppleIDClient *)myAppleIDInfoClient;
-(void)setMyAppleIDInfoClient:(CUAppleIDClient *)arg1 ;
-(id)showPINHandlerEx;
-(void)setShowPINHandlerEx:(id)arg1 ;
-(id)showPINHandler;
-(void)setShowPINHandler:(id)arg1 ;
-(id)hidePINHandler;
-(void)setHidePINHandler:(id)arg1 ;
-(id)sendDataHandler;
-(void)setSendDataHandler:(id)arg1 ;
-(id)signDataHandler;
-(void)setSignDataHandler:(id)arg1 ;
-(id)verifySignatureHandler;
-(void)setVerifySignatureHandler:(id)arg1 ;
@end

