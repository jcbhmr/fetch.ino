typedef (
  // We don't want to involve std::vector<> in low-level Arduino stuff, so we
  // omit this.
  // sequence<sequence<ByteString>> or
  record<ByteString, ByteString>
) HeadersInit;

// [Exposed=(Window,Worker)]
[Exposed=*]
interface Headers {
  constructor(optional HeadersInit init);

  undefined append(ByteString name, ByteString value);
  undefined delete(ByteString name);
  ByteString? get(ByteString name);
  // We don't deal with cookies right now.
  // sequence<ByteString> getSetCookie();
  boolean has(ByteString name);
  undefined set(ByteString name, ByteString value);
  iterable<ByteString, ByteString>;
};

typedef (
  // We don't have the File API, and probably never will. Thus, we don't have to
  // deal with the Blob/File types.
  // Blob or
  BufferSource or
  // We don't implement this yet.
  // FormData or
  // We don't implement this yet.
  // URLSearchParams or
  USVString
) XMLHttpRequestBodyInit;

typedef (
  ReadableStream or
  XMLHttpRequestBodyInit
) BodyInit;
interface mixin Body {
  readonly attribute ReadableStream? body;
  readonly attribute boolean bodyUsed;
  // We don't implement any async stuff yet.
  // [NewObject] Promise<ArrayBuffer> arrayBuffer();
  ArrayBuffer arrayBuffer();
  // This is a File API thing that we will never get.
  // [NewObject] Promise<Blob> blob();
  // Not yet implemented.
  // [NewObject] Promise<FormData> formData();
  // Synchonous version instead.
  // [NewObject] Promise<any> json();
  any json();
  // Synchonous version instead.
  // [NewObject] Promise<USVString> text();
  USVString text();
};
typedef (Request or USVString) RequestInfo;

// [Exposed=(Window,Worker)]
[Exposed=*]
interface Request {
  constructor(RequestInfo input, optional RequestInit init = {});

  readonly attribute ByteString method;
  readonly attribute USVString url;
  [SameObject] readonly attribute Headers headers;

  // All of this metadata stuff is probably never going to be implemented. It's
  // mostly browser-specific stuff that Arduino projects don't need.
  // readonly attribute RequestDestination destination;
  // readonly attribute USVString referrer;
  // readonly attribute ReferrerPolicy referrerPolicy;
  // readonly attribute RequestMode mode;
  // readonly attribute RequestCredentials credentials;
  // readonly attribute RequestCache cache;
  // We do, however, want to control redirects.
  readonly attribute RequestRedirect redirect;
  // readonly attribute DOMString integrity;
  // readonly attribute boolean keepalive;
  // readonly attribute boolean isReloadNavigation;
  // readonly attribute boolean isHistoryNavigation;
  // readonly attribute AbortSignal signal;
  // readonly attribute RequestDuplex duplex;

  // Custom property for SSL verification. This is specific to Arduino since
  // there's no builtin SSL support.
  readonly attribute ArrayBuffer? certificate;
  readonly attribute ArrayBuffer? fingerprint;

  // Not yet implemented.
  // [NewObject] Request clone();
};
Request includes Body;

dictionary RequestInit {
  ByteString method;
  HeadersInit headers;
  BodyInit? body;
  // USVString referrer;
  // ReferrerPolicy referrerPolicy;
  // RequestMode mode;
  // RequestCredentials credentials;
  // RequestCache cache;
  // RequestRedirect redirect;
  // DOMString integrity;
  // boolean keepalive;
  // AbortSignal? signal;
  // RequestDuplex duplex;
  // RequestPriority priority;
  // any window; // can only be set to null
};

// enum RequestDestination { "", "audio", "audioworklet", "document", "embed", "font", "frame", "iframe", "image", "manifest", "object", "paintworklet", "report", "script", "sharedworker", "style",  "track", "video", "worker", "xslt" };
// enum RequestMode { "navigate", "same-origin", "no-cors", "cors" };
// enum RequestCredentials { "omit", "same-origin", "include" };
// enum RequestCache { "default", "no-store", "reload", "no-cache", "force-cache", "only-if-cached" };
// enum RequestRedirect { "follow", "error", "manual" };
// enum RequestDuplex { "half" };
// enum RequestPriority { "high", "low", "auto" };

[Exposed=(Window,Worker)]interface Response {
  constructor(optional BodyInit? body = null, optional ResponseInit init = {});

  // [NewObject] static Response error();
  // [NewObject] static Response redirect(USVString url, optional unsigned short status = 302);
  // [NewObject] static Response json(any data, optional ResponseInit init = {});

  // readonly attribute ResponseType type;

  readonly attribute USVString url;
  readonly attribute boolean redirected;
  readonly attribute unsigned short status;
  readonly attribute boolean ok;
  readonly attribute ByteString statusText;
  [SameObject] readonly attribute Headers headers;

  // [NewObject] Response clone();
};
Response includes Body;

dictionary ResponseInit {
  unsigned short status = 200;
  // ByteString statusText = "";
  HeadersInit headers;
};

// enum ResponseType { "basic", "cors", "default", "error", "opaque", "opaqueredirect" };

partial interface mixin WindowOrWorkerGlobalScope {
  [NewObject] Promise<Response> fetch(RequestInfo input, optional RequestInit init = {});
};
