//
// NSURLConnection+BingTranslate.h
// BingTranslate
//
// Created by Árpád Goretity on 18/10/2011.
// Licensed under a CreativeCommons Attribution 3.0 Unported License
//

#import <Foundation/Foundation.h>


@interface NSURLConnection (BingTranslate)
+ (NSURLConnection *) connectionWithUrlString:(NSString *)urlString delegate:(NSObject *)delegate;
@end

