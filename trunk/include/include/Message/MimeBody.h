/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MessageBody.h>

@class MimePart;

@interface MimeBody : MessageBody
{
    MimePart *_topLevelPart;
    unsigned int _preferredTextEncoding;
    unsigned int _preferredAlternative:16;
    unsigned int _numAlternatives:16;
}

+ (id)createMimeBoundary;	// IMP=0x30b648b1
+ (void)initialize;	// IMP=0x30b647ed
+ (id)versionString;	// IMP=0x30b648a5
- (BOOL)_isPossiblySignedOrEncrypted;	// IMP=0x30b64b25
- (id)attachments;	// IMP=0x30b64c69
- (id)contentToOffset:(unsigned int)fp8 resultOffset:(unsigned int *)fp12 asHTML:(BOOL)fp16;	// IMP=0x30b64da5
- (void)dealloc;	// IMP=0x30b64955
- (void)decodeIfNecessary;	// IMP=0x30b64bdd
- (id)htmlContentToOffset:(unsigned int)fp8 resultOffset:(unsigned int *)fp12;	// IMP=0x30b64f1d
- (id)init;	// IMP=0x30b64921
- (BOOL)isHTML;	// IMP=0x30b64c9d
- (BOOL)isRich;	// IMP=0x30b64d21
- (id)mimeSubtype;	// IMP=0x30b649f9
- (id)mimeType;	// IMP=0x30b649d5
- (int)numberOfAlternatives;	// IMP=0x30b64f5d
- (unsigned int)numberOfAttachmentsSigned:(char *)fp8 encrypted:(char *)fp12;	// IMP=0x30b64c1d
- (id)partWithNumber:(id)fp8;	// IMP=0x30b64a1d
- (int)preferredAlternative;	// IMP=0x30b65079
- (id)preferredBodyPart;	// IMP=0x30b650e1
- (unsigned long)preferredTextEncoding;	// IMP=0x30b649cd
- (void)setPreferredAlternative:(int)fp8;	// IMP=0x30b64ff1
- (void)setPreferredTextEncoding:(unsigned long)fp8;	// IMP=0x30b649d1
- (void)setTopLevelPart:(id)fp8;	// IMP=0x30b64995
- (id)textHtmlPart;	// IMP=0x30b6517d
- (id)topLevelPart;	// IMP=0x30b64991
- (unsigned int)totalTextSize;	// IMP=0x30b64f39

@end
