--- lxqt-config-input/touchpaddevice.cpp.orig	2024-04-26 04:25:47 UTC
+++ lxqt-config-input/touchpaddevice.cpp
@@ -368,7 +368,7 @@ bool TouchpadDevice::setTapToDragEnabled(bool enabled)
 
 bool TouchpadDevice::setAccelSpeed(float speed) const
 {
-    return set_xi2_property(LIBINPUT_PROP_ACCEL, QList<QVariant>({speed}));
+    return set_xi2_property(LIBINPUT_PROP_ACCEL, QList<QVariant>({(long long)speed}));
 }
 
 int TouchpadDevice::scrollMethodsAvailable() const
