{
  "targets": [
    {
      "target_name": "vowpal-wabbit",
      "sources": [ "vowpal-wabbit.cc", "vw_instance.cc" ],
      "include_dirs": [
        "/usr/local/include",
        "../vowpalwabbit"
      ],
      "libraries": [
        "/usr/local/lib/libboost_program_options.dylib",
        "../../vowpalwabbit/libvw.a",
        "../../vowpalwabbit/liballreduce.a",
      ],
      "cflags_cc!": [ "-fno-exceptions" ],
      "cflags!": [ "-fno-exceptions" ],
      "conditions": [
        [ 'OS=="mac"', {
          "xcode_settings": {
            'OTHER_CPLUSPLUSFLAGS' : ['-std=c++11','-stdlib=libc++', '-v'],
            'OTHER_LDFLAGS': ['-stdlib=libc++'],
            'MACOSX_DEPLOYMENT_TARGET': '10.7',
            'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
            'GCC_ENABLE_CPP_RTTI': 'YES'
            }
          }]
      ]
    }
  ]
}