sed -i '/'zh_CN.UTF-8'/s/^#//' /etc/locale.gen
sed -i '/'en_US.UTF-8'/s/^#//' /etc/locale.gen
locale-gen
echo LANG=zh_CN.UTF-8 > /etc/locale.conf
ln -s /usr/share/zoneinfo/Asia/Shanghai /etc/localtime
hwclock --systohc --utc
echo "wuxiangdong-virtualbox" > /etc/hostname
sed -i '/127.0.0.1/s/$/ 'wuxiangdong-virtualbox'/' /etc/hosts
sed -i '/::1/s/$/ 'wuxiangdong-virtualbox'/' /etc/hosts
systemctl enable dhcpcd
pacman -S --noconfirm intel-ucode
pacman -S --noconfirm grub
grub-install --recheck /dev/sda
grub-mkconfig -o /boot/grub/grub.cfg
echo  >> /etc/pacman.conf
echo "[archlinuxcn]" >> /etc/pacman.conf
echo "SigLevel = Optional TrustAll" >> /etc/pacman.conf
echo "Server = https://mirrors.ustc.edu.cn/archlinuxcn/\$arch" >> /etc/pacman.conf
nano /etc/pacman.conf
pacman -Syu --noconfirm archlinuxcn-keyring
pacman -S --noconfirm zsh
chsh -s $(which zsh)
pacman -S --noconfirm oh-my-zsh-git
cp /usr/share/oh-my-zsh/zshrc ~/.zshrc
useradd -m -g users -G audio,video,floppy,network,rfkill,scanner,storage,optical,power,wheel,uucp -s /usr/bin/zsh wuxiangdong
cp /usr/share/oh-my-zsh/zshrc /home/wuxiangdong/.zshrc
echo "apple_9698" | passwd wuxiangdong
echo "apple_9698" | passwd
pacman -S --noconfirm xorg-server xorg-server-utils
pacman -S --noconfirm xf86-video-intel mesa mesa-libgl libva-intel-driver libva
pacman -S --noconfirm plasma
pacman -S --noconfirm alsa-utils alsa-plugins
pacman -S --noconfirm pulseaudio
pacman -S --noconfirm libcanberra-pulse
pacman -S --noconfirm xf86-input-synaptics
pacman -S --noconfirm sddm sddm-kcm
systemctl enable sddm
pacman -S --noconfirm firefox firefox-i18n-zh-cn
