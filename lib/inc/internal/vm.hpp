#pragma once

/**
 * Virtual machine name constants
 */
namespace whereami { namespace vm {

    /**
     * The name for VMWare virtual machine.
     */
    constexpr static char const* vmware{"vmware"};

    /**
     * The name for VirtualBox virtual machine.
     */
    constexpr static char const* virtualbox{"virtualbox"};

    /**
     * The name for Parallels virtual machine.
     */
    constexpr static char const* parallels{"parallels"};

    /**
     * The name for VMware Server virtual machine.
     */
    constexpr static char const* vmware_server{"vmware_server"};

    /**
     * The name for VMware Workstation virtual machine.
     */
    constexpr static char const* vmware_workstation{"vmware_workstation"};

    /**
     * The name for Docker virtual machine.
     */
    constexpr static char const* docker{"docker"};

    /**
     * The name for LXC virtual machine.
     */
    constexpr static char const* lxc{"lxc"};

    /**
     * The name for systemd-nspawn
     */
    constexpr static char const* systemd_nspawn{"systemd_nspawn"};

    /**
     * The name for Google Compute Engine virtual machine.
     */
    constexpr static char const* gce{"gce"};

    /**
     * The name for OpenStack-hosted virtual machine, when OpenStack defines the machine type.
     */
    constexpr static char const* openstack{"openstack"};

    /**
     * The name for Xen privileged domain virtual machine.
     */
    constexpr static char const* xen_privileged{"xen0"};

    /**
     * The name for Xen unprivileged domain virtual machine.
     */
    constexpr static char const* xen_unprivileged{"xenu"};

    /**
     * The name for Xen Hardware virtual machine.
     */
    constexpr static char const* xen_hardware{"xenhvm"};

    /**
     * The name for Xen virtual machine (on Windows)
     */
    constexpr static char const* xen{"xen"};

    /**
     * The name for IBM System Z virtual machine.
     */
    constexpr static char const* zlinux{"zlinux"};

    /**
     * The name for Linux-VServer host virtual machine.
     */
    constexpr static char const* vserver_host{"vserver_host"};

    /**
     * The name for Linux-VServer virtual machine.
     */
    constexpr static char const* vserver{"vserver"};

    /**
     * The name for OpenVZ virtual machines.
     */
    constexpr static char const* openvz{"openvz"};

    /**
     * The name for KVM (QEMU) virtual machine.
     */
    constexpr static char const* kvm{"kvm"};

    /**
     * The name for Bochs virtual machine.
     */
    constexpr static char const* bochs{"bochs"};

    /**
     * The name for Microsoft Hyper-V virtual machine.
     */
    constexpr static char const* hyperv{"hyperv"};

    /**
     * The name for Red Hat Enterprise Virtualization virtual machine.
     */
    constexpr static char const* redhat_ev{"rhev"};

    /**
     * The name for oVirt virtual machine.
     */
    constexpr static char const* ovirt{"ovirt"};

    /**
     * The name for Solaris zones
     */
    constexpr static char const* zone{"zone"};

    /**
     * The name for Solaris ldom
     */
    constexpr static char const* ldom{"ldom"};

}}  // namespace whereami::vm
